#pragma once
// IWYU pragma private; include "System\Xml\XPath\XPathNavigatorKeyComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNavigatorKeyComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer.System_Collections_IEqualityComparer_Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::XPath::XPathNavigatorKeyComparer::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62ea604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(),
                                                             { "System.Collections.IEqualityComparer.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer.System_Collections_IEqualityComparer_GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XPath::XPathNavigatorKeyComparer::*)(::System::Object*)>(
    &::System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x62ea6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(),
                                                                                           { "System.Collections.IEqualityComparer.GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathNavigatorKeyComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XPath::XPathNavigatorKeyComparer::*)()>(&::System::Xml::XPath::XPathNavigatorKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62ea600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_Equals(::System::Object* obj1, ::System::Object* obj2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(),
                                                           { "System.Collections.IEqualityComparer.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj1, obj2);
}
inline int32_t System::Xml::XPath::XPathNavigatorKeyComparer::System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(),
                                                                                         { "System.Collections.IEqualityComparer.GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void System::Xml::XPath::XPathNavigatorKeyComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XPath::XPathNavigatorKeyComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNavigatorKeyComparer* System::Xml::XPath::XPathNavigatorKeyComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XPath::XPathNavigatorKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr System::Xml::XPath::XPathNavigatorKeyComparer::operator ::System::Collections::IEqualityComparer*() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Xml::XPath::XPathNavigatorKeyComparer::i___System__Collections__IEqualityComparer() noexcept {
  return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathNavigatorKeyComparer::XPathNavigatorKeyComparer() {}
