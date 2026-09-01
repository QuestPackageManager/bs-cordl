#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\Category.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Category.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::Category::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Category::get_Label)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a61904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { "get_Label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Category.get_Uid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::Category::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Category::get_Uid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a61974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { "get_Uid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Category.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::Category::*)(::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::Manager::Category::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a619cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Category>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Category.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::Category::*)(::System::Object*)>(&::Meta::XR::ImmersiveDebugger::Manager::Category::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a61a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Category.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Manager::Category::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Category::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a61adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), 2 }));
    return ___internal_method;
  }
};
inline void Meta::XR::ImmersiveDebugger::Manager::Category::setStaticF_Default(::Meta::XR::ImmersiveDebugger::Manager::Category value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::Category, "Default", ::Meta::XR::ImmersiveDebugger::Manager::Category>(
      std::forward<::Meta::XR::ImmersiveDebugger::Manager::Category>(value));
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Category Meta::XR::ImmersiveDebugger::Manager::Category::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::Category, "Default", ::Meta::XR::ImmersiveDebugger::Manager::Category>();
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::Category::get_Label() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { "get_Label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::Category::get_Uid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { "get_Uid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::Category::Equals(::Meta::XR::ImmersiveDebugger::Manager::Category other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), { "Equals", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Category>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::Category::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Meta::XR::ImmersiveDebugger::Manager::Category::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Category>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>"
constexpr Meta::XR::ImmersiveDebugger::Manager::Category::operator ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>*() {
  return static_cast<::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>"
constexpr ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>*
Meta::XR::ImmersiveDebugger::Manager::Category::i___System__IEquatable_1___Meta__XR__ImmersiveDebugger__Manager__Category_() {
  return static_cast<::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Item", ty: "::Meta::XR::ImmersiveDebugger::Hierarchy::Item*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category::Category(::StringW Id, ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Item) noexcept {
  this->Id = Id;
  this->Item = Item;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category::Category() {}
